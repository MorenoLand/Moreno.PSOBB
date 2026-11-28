namespace PsoBB.Rendering;

/// <summary>
/// Input rectangle, center, and near/far scale configuration applied to the Ninja camera viewport.
/// </summary>
public readonly record struct CameraViewportSettings(
	float HalfWidth,
	float HalfHeight,
	float ScaleX,
	float ScaleY,
	float NearPlane,
	float Width,
	float Height,
	int X,
	int Y,
	float OffsetX,
	float OffsetY,
	float NearScale,
	float FarScale);

/// <summary>
/// Active Ninja viewport transform parameters and screen-crop globals updated by camera initialization and resets.
/// </summary>
public static class CameraViewportState
{
	/// <summary>Gets or sets the combined horizontal and vertical scale factor at <c>0x00A48820</c>.</summary>
	[OriginalGlobal(0x00A48820)]
	public static float ScaledAspectX { get; set; }

	/// <summary>Gets or sets the negated vertical scale factor at <c>0x00A48824</c>.</summary>
	[OriginalGlobal(0x00A48824)]
	public static float ScaledAspectY { get; set; }

	/// <summary>Gets or sets the viewport center X coordinate in pixels.</summary>
	[OriginalGlobal(0x00A48828)]
	public static float HalfWidth { get; set; }

	/// <summary>Gets or sets the viewport center Y coordinate in pixels.</summary>
	[OriginalGlobal(0x00A4882C)]
	public static float HalfHeight { get; set; }

	/// <summary>Gets or sets the vertical viewport scale or near-plane projection factor at <c>0x00A48838</c>.</summary>
	[OriginalGlobal(0x00A48838)]
	public static float ScaleY { get; set; }

	/// <summary>Gets or sets the horizontal viewport scale factor at <c>0x00A4883C</c>.</summary>
	[OriginalGlobal(0x00A4883C)]
	public static float ScaleX { get; set; }

	/// <summary>Gets or sets the unit multiplier stored at <c>0x00A48840</c>.</summary>
	[OriginalGlobal(0x00A48840)]
	public static float UnitScale { get; set; }

	/// <summary>Gets or sets the inverse horizontal scale (<c>1.0f / ScreenScaleX</c>) at <c>0x00A48844</c>.</summary>
	[OriginalGlobal(0x00A48844)]
	public static float InverseScreenScaleX { get; set; }

	/// <summary>Gets or sets the active viewport width in pixels.</summary>
	[OriginalGlobal(0x00A48848)]
	public static float Width { get; set; }

	/// <summary>Gets or sets the active viewport height in pixels.</summary>
	[OriginalGlobal(0x00A4884C)]
	public static float Height { get; set; }

	/// <summary>Gets or sets the viewport left origin in pixels.</summary>
	[OriginalGlobal(0x00A48850)]
	public static int OriginX { get; set; }

	/// <summary>Gets or sets the viewport top origin in pixels.</summary>
	[OriginalGlobal(0x00A48854)]
	public static int OriginY { get; set; }

	/// <summary>Gets or sets the viewport horizontal offset at <c>0x00A48858</c>.</summary>
	[OriginalGlobal(0x00A48858)]
	public static float OffsetX { get; set; }

	/// <summary>Gets or sets the viewport vertical offset at <c>0x00A4885C</c>.</summary>
	[OriginalGlobal(0x00A4885C)]
	public static float OffsetY { get; set; }

	/// <summary>Gets or sets the near clip scale factor at <c>0x00A48860</c>.</summary>
	[OriginalGlobal(0x00A48860)]
	public static float NearScale { get; set; } = 1.0f;

	/// <summary>Gets or sets the far clip scale factor at <c>0x00A48864</c>.</summary>
	[OriginalGlobal(0x00A48864)]
	public static float FarScale { get; set; } = 0.85f;

	/// <summary>Gets or sets the Ninja horizontal screen scale input at <c>0x00ACC08C</c>.</summary>
	[OriginalGlobal(0x00ACC08C)]
	public static float ScreenScaleX { get; set; } = 1.0f;

	/// <summary>Gets or sets the Ninja vertical screen scale input at <c>0x00ACC090</c>.</summary>
	[OriginalGlobal(0x00ACC090)]
	public static float ScreenScaleY { get; set; } = 1.0f;

	/// <summary>Gets or sets the projection half-width global at <c>0x00AF02C8</c>.</summary>
	[OriginalGlobal(0x00AF02C8)]
	public static float ProjectionHalfWidth { get; set; }

	/// <summary>Gets or sets the projection half-height global at <c>0x00AF02CC</c>.</summary>
	[OriginalGlobal(0x00AF02CC)]
	public static float ProjectionHalfHeight { get; set; }

	/// <summary>Gets or sets the projection near-plane or aspect factor at <c>0x00AF02D8</c>.</summary>
	[OriginalGlobal(0x00AF02D8)]
	public static float ProjectionNearPlane { get; set; }

	/// <summary>Gets or sets the minimum camera depth bias scalar at <c>0x00A48A58</c>.</summary>
	[OriginalGlobal(0x00A48A58)]
	public static float DepthBiasMin { get; set; } = 0.85f;

	/// <summary>Gets or sets the maximum camera depth bias scalar at <c>0x00A48A5C</c>.</summary>
	[OriginalGlobal(0x00A48A5C)]
	public static float DepthBiasMax { get; set; } = 1.0f;

	/// <summary>Gets or sets the first auxiliary camera range constant at <c>0x00A489C0</c>.</summary>
	[OriginalGlobal(0x00A489C0)]
	public static float AuxiliaryScaleOne { get; set; } = 1.0f;

	/// <summary>Gets or sets the second auxiliary camera range constant at <c>0x00A489C4</c>.</summary>
	[OriginalGlobal(0x00A489C4)]
	public static float AuxiliaryScaleEight { get; set; } = 8.0f;

	/// <summary>Gets or sets the third auxiliary camera range constant at <c>0x00A489C8</c>.</summary>
	[OriginalGlobal(0x00A489C8)]
	public static float AuxiliaryScaleOneHalf { get; set; } = 1.5f;

	/// <summary>Gets or sets whether a non-centered viewport offset is active at <c>0x00A48A34</c>.</summary>
	[OriginalGlobal(0x00A48A34)]
	public static ushort ViewportOffsetActive { get; set; }

	/// <summary>Gets or sets the viewport crop state at <c>0x00A48A38</c>.</summary>
	[OriginalGlobal(0x00A48A38)]
	public static ushort CropOffsetState { get; set; }

	/// <summary>Gets or sets the horizontal crop offset at <c>0x00A48A4C</c>.</summary>
	[OriginalGlobal(0x00A48A4C)]
	public static ushort CropOffsetX { get; set; }

	/// <summary>Gets or sets the vertical crop offset at <c>0x00A48A48</c>.</summary>
	[OriginalGlobal(0x00A48A48)]
	public static ushort CropOffsetY { get; set; }

	/// <summary>Gets or sets the active Ninja far Z clip value at <c>0x00AF0300</c>.</summary>
	[OriginalGlobal(0x00AF0300)]
	public static float FarClip { get; set; }

	/// <summary>Gets or sets the active Ninja near Z clip value at <c>0x00AF0304</c>.</summary>
	[OriginalGlobal(0x00AF0304)]
	public static float NearClip { get; set; }

	/// <summary>Gets or sets the floating-point Ninja screen width global at <c>0x00AF02E8</c>.</summary>
	[OriginalGlobal(0x00AF02E8)]
	public static float ScreenWidthFloat { get; set; }

	/// <summary>Gets or sets the floating-point Ninja screen height global at <c>0x00AF02EC</c>.</summary>
	[OriginalGlobal(0x00AF02EC)]
	public static float ScreenHeightFloat { get; set; }

	/// <summary>Gets or sets the clip window left coordinate at <c>0x00AF0330</c>.</summary>
	[OriginalGlobal(0x00AF0330)]
	public static float ClipLeft { get; set; }

	/// <summary>Gets or sets the clip window top coordinate at <c>0x00AF0334</c>.</summary>
	[OriginalGlobal(0x00AF0334)]
	public static float ClipTop { get; set; }

	/// <summary>Gets or sets the clip window right coordinate at <c>0x00AF0338</c>.</summary>
	[OriginalGlobal(0x00AF0338)]
	public static float ClipRight { get; set; }

	/// <summary>Gets or sets the clip window bottom coordinate at <c>0x00AF033C</c>.</summary>
	[OriginalGlobal(0x00AF033C)]
	public static float ClipBottom { get; set; }

	/// <summary>Gets or sets the horizontal device scale factor at <c>0x00ACC0A0</c>.</summary>
	[OriginalGlobal(0x00ACC0A0)]
	public static float DeviceScaleX { get; set; }

	/// <summary>Gets or sets the vertical device scale factor at <c>0x00ACC0A4</c>.</summary>
	[OriginalGlobal(0x00ACC0A4)]
	public static float DeviceScaleY { get; set; }

	/// <summary>Gets or sets the device viewport X origin at <c>0x00ACC0A8</c>.</summary>
	[OriginalGlobal(0x00ACC0A8)]
	public static int DeviceViewportX { get; set; }

	/// <summary>Gets or sets the device viewport Y origin at <c>0x00ACC0AC</c>.</summary>
	[OriginalGlobal(0x00ACC0AC)]
	public static int DeviceViewportY { get; set; }

	/// <summary>Gets or sets the device viewport width at <c>0x00ACC0B0</c>.</summary>
	[OriginalGlobal(0x00ACC0B0)]
	public static int DeviceViewportWidth { get; set; }

	/// <summary>Gets or sets the device viewport height at <c>0x00ACC0B4</c>.</summary>
	[OriginalGlobal(0x00ACC0B4)]
	public static int DeviceViewportHeight { get; set; }

	/// <summary>Gets or sets the render rectangle X origin at <c>0x00ACC0C0</c>.</summary>
	[OriginalGlobal(0x00ACC0C0)]
	public static float RenderRectX { get; set; }

	/// <summary>Gets or sets the render rectangle Y origin at <c>0x00ACC0C4</c>.</summary>
	[OriginalGlobal(0x00ACC0C4)]
	public static float RenderRectY { get; set; }

	/// <summary>Gets or sets the render rectangle width at <c>0x00ACC0C8</c>.</summary>
	[OriginalGlobal(0x00ACC0C8)]
	public static float RenderRectWidth { get; set; }

	/// <summary>Gets or sets the render rectangle height at <c>0x00ACC0CC</c>.</summary>
	[OriginalGlobal(0x00ACC0CC)]
	public static float RenderRectHeight { get; set; }

	/// <summary>Gets or sets the normalized horizontal aspect ratio against 640px at <c>0x00ACC0E8</c>.</summary>
	[OriginalGlobal(0x00ACC0E8)]
	public static float AspectScaleX { get; set; }

	/// <summary>Gets or sets the normalized vertical aspect ratio against 480px at <c>0x00ACC0EC</c>.</summary>
	[OriginalGlobal(0x00ACC0EC)]
	public static float AspectScaleY { get; set; }

	/// <summary>Gets or sets the horizontal render offset at <c>0x00ACC0F0</c>.</summary>
	[OriginalGlobal(0x00ACC0F0)]
	public static float RenderOffsetX { get; set; }

	/// <summary>Gets or sets the vertical render offset at <c>0x00ACC0F4</c>.</summary>
	[OriginalGlobal(0x00ACC0F4)]
	public static float RenderOffsetY { get; set; }

	/// <summary>Gets or sets the 18-word saved viewport snapshot stored at <c>0x00A487C0</c>.</summary>
	[OriginalGlobal(0x00A487C0)]
	public static CameraViewportSettings? SavedViewport { get; set; }

	private static float _savedScaledAspectX;
	private static float _savedScaledAspectY;
	private static float _savedUnitScale;
	private static float _savedInverseScreenScaleX;

	/// <summary>
	/// Restores every viewport and projection global to its clean initial test state.
	/// </summary>
	public static void ResetGlobals()
	{
		ScaledAspectX = 0.0f;
		ScaledAspectY = 0.0f;
		HalfWidth = 0.0f;
		HalfHeight = 0.0f;
		ScaleY = 0.0f;
		ScaleX = 0.0f;
		UnitScale = 0.0f;
		InverseScreenScaleX = 0.0f;
		Width = 0.0f;
		Height = 0.0f;
		OriginX = 0;
		OriginY = 0;
		OffsetX = 0.0f;
		OffsetY = 0.0f;
		NearScale = 1.0f;
		FarScale = 0.85f;
		ScreenScaleX = 1.0f;
		ScreenScaleY = 1.0f;
		ProjectionHalfWidth = 0.0f;
		ProjectionHalfHeight = 0.0f;
		ProjectionNearPlane = 0.0f;
		DepthBiasMin = 0.85f;
		DepthBiasMax = 1.0f;
		AuxiliaryScaleOne = 1.0f;
		AuxiliaryScaleEight = 8.0f;
		AuxiliaryScaleOneHalf = 1.5f;
		ViewportOffsetActive = 0;
		CropOffsetState = 0;
		CropOffsetX = 0;
		CropOffsetY = 0;
		FarClip = 0.0f;
		NearClip = 0.0f;
		ScreenWidthFloat = 0.0f;
		ScreenHeightFloat = 0.0f;
		ClipLeft = 0.0f;
		ClipTop = 0.0f;
		ClipRight = 0.0f;
		ClipBottom = 0.0f;
		DeviceScaleX = 0.0f;
		DeviceScaleY = 0.0f;
		DeviceViewportX = 0;
		DeviceViewportY = 0;
		DeviceViewportWidth = 0;
		DeviceViewportHeight = 0;
		RenderRectX = 0.0f;
		RenderRectY = 0.0f;
		RenderRectWidth = 0.0f;
		RenderRectHeight = 0.0f;
		AspectScaleX = 0.0f;
		AspectScaleY = 0.0f;
		RenderOffsetX = 0.0f;
		RenderOffsetY = 0.0f;
		SavedViewport = null;
		_savedScaledAspectX = 0.0f;
		_savedScaledAspectY = 0.0f;
		_savedUnitScale = 0.0f;
		_savedInverseScreenScaleX = 0.0f;
	}

	/// <summary>
	/// Copies viewport projection half-dimensions and near-plane scale into the Ninja projection globals.
	/// </summary>
	/// <param name="settings">The viewport settings supplying center half-dimensions and near-plane value.</param>
	[Original(0x0083A5F0)]
	public static void ApplyProjectionClipAndScale(CameraViewportSettings settings)
	{
		ProjectionNearPlane = settings.NearPlane;
		ProjectionHalfWidth = settings.HalfWidth;
		ProjectionHalfHeight = settings.HalfHeight;
	}

	/// <summary>
	/// Applies <paramref name="settings"/> into the active viewport globals using <see cref="ScreenScaleX"/> and <see cref="ScreenScaleY"/>.
	/// </summary>
	/// <param name="settings">The viewport configuration to apply.</param>
	[Original(0x004D4374)]
	public static void ApplyViewport(CameraViewportSettings settings)
	{
		FieldCameraController.Flags |= 0x200u;
		Width = settings.Width;
		Height = settings.Height;
		HalfWidth = settings.HalfWidth;
		HalfHeight = settings.HalfHeight;
		InverseScreenScaleX = (float)(1.0f / (double)ScreenScaleX);
		ScaledAspectX = (float)((double)ScreenScaleX * ScreenScaleY);
		UnitScale = 1.0f;
		ScaleY = ScreenScaleY;
		ScaleX = ScreenScaleX;
		ScaledAspectY = -(float)((double)ScreenScaleY * UnitScale);
		OriginX = settings.X;
		OriginY = settings.Y;
		OffsetX = settings.OffsetX;
		OffsetY = settings.OffsetY;
		NearScale = settings.NearScale;
		FarScale = settings.FarScale;
	}

	/// <summary>
	/// Enables the custom viewport flag (<c>0x400</c>), applies <paramref name="settings"/>, and returns <see langword="true"/>.
	/// </summary>
	/// <param name="settings">The custom viewport configuration to apply.</param>
	/// <returns>Always <see langword="true"/>.</returns>
	[Original(0x004D434C)]
	public static bool ApplyCustomViewport(CameraViewportSettings settings)
	{
		FieldCameraController.Flags |= 0x400u;
		ApplyViewport(settings);
		return true;
	}

	/// <summary>
	/// Clears the custom viewport flag and applies a full-screen viewport for <paramref name="displayWidth"/> and <paramref name="displayHeight"/>.
	/// </summary>
	/// <param name="displayWidth">The render surface width in pixels.</param>
	/// <param name="displayHeight">The render surface height in pixels.</param>
	[Original(0x004D4438)]
	public static void ResetDisplayViewport(int displayWidth, int displayHeight)
	{
		FieldCameraController.Flags &= ~0x400u;
		CameraViewportSettings fullScreen = new(
			displayWidth >> 1,
			displayHeight >> 1,
			ScreenScaleX,
			ScreenScaleY,
			0.0f,
			displayWidth,
			displayHeight,
			0,
			0,
			20.0f,
			15.0f,
			1.0f,
			0.85f);
		ApplyViewport(fullScreen);
	}

	/// <summary>
	/// Restores the three default camera auxiliary range scale constants.
	/// </summary>
	[Original(0x004D46FC)]
	public static void ResetAuxiliaryScales()
	{
		AuxiliaryScaleOne = 1.0f;
		AuxiliaryScaleEight = 8.0f;
		AuxiliaryScaleOneHalf = 1.5f;
	}

	/// <summary>
	/// Resets camera controller flags, active mode, global up axis, and default full-screen viewport geometry.
	/// </summary>
	/// <param name="displayWidth">The render surface width in pixels.</param>
	/// <param name="displayHeight">The render surface height in pixels.</param>
	[Original(0x004D471C)]
	public static void ResetEnvironment(int displayWidth, int displayHeight)
	{
		Width = displayWidth;
		Height = displayHeight;
		ScaleY = 0.0f;
		OriginX = 0;
		OriginY = 0;
		FieldCameraController.SnapRequested = 0;
		FieldCameraController.ActiveModeIndex = 0;
		FieldCameraController.PreviousModeIndex = 0;
		FieldCameraController.Flags = 0;
		HalfWidth = displayWidth >> 1;
		HalfHeight = displayHeight >> 1;
		OffsetX = 0.0f;
		OffsetY = 0.0f;
		NearScale = 1.0f;
		FarScale = 0.85f;
		FieldCameraController.GlobalUpAxis = new PsoBB.Mathematics.Vector3(0.0f, 1.0f, 0.0f);
		ViewportOffsetActive = 0;
	}

	/// <summary>
	/// Initializes the display screen bounds, applies a full-screen camera viewport, updates projection scale globals, and sets depth bias limits.
	/// </summary>
	/// <param name="displayWidth">The render surface width in pixels.</param>
	/// <param name="displayHeight">The render surface height in pixels.</param>
	[Original(0x004D4800)]
	public static void InitializeDefaultViewport(int displayWidth, int displayHeight)
	{
		FieldCameraController.ScreenWidth = unchecked((short)displayWidth);
		FieldCameraController.ScreenHeight = unchecked((short)displayHeight);
		CropOffsetState = 0;
		CropOffsetX = 0;
		CropOffsetY = 0;

		CameraViewportSettings fullScreen = new(
			displayWidth >> 1,
			displayHeight >> 1,
			ScreenScaleX,
			ScreenScaleY,
			250.0f,
			displayWidth,
			displayHeight,
			0,
			0,
			20.0f,
			15.0f,
			1.0f,
			0.85f);
		ApplyViewport(fullScreen);
		ApplyProjectionClipAndScale(new CameraViewportSettings(
			HalfWidth,
			HalfHeight,
			ScaleX,
			ScaleY,
			ScaleY,
			Width,
			Height,
			OriginX,
			OriginY,
			OffsetX,
			OffsetY,
			NearScale,
			FarScale));
		DepthBiasMax = 1.0f;
		DepthBiasMin = 0.85f;
	}

	/// <summary>
	/// Clamps and negates the Ninja near/far depth clip bounds into [-65535, -1].
	/// </summary>
	/// <param name="nearClip">Negative near clip distance.</param>
	/// <param name="farClip">Negative far clip distance.</param>
	[Original(0x0083AC80)]
	public static void SetDepthClipRange(float nearClip, float farClip)
	{
		const float MinClip = -65535.0f;
		const float MaxClip = -1.0f;

		double clampedNear = nearClip;
		if (MaxClip < (double)nearClip)
			clampedNear = MaxClip;
		if (MinClip > clampedNear)
			clampedNear = MinClip;
		NearClip = (float)-clampedNear;

		double clampedFar = MaxClip >= (double)farClip ? farClip : MaxClip;
		if (clampedFar < MinClip)
			clampedFar = MinClip;
		FarClip = (float)-clampedFar;
	}

	/// <summary>
	/// Stores the active 2D render rectangle origin and extents globals.
	/// </summary>
	/// <param name="x">Left coordinate in pixels.</param>
	/// <param name="y">Top coordinate in pixels.</param>
	/// <param name="width">Width in pixels.</param>
	/// <param name="height">Height in pixels.</param>
	[Original(0x0082F2E4)]
	public static void SetRenderRect(float x, float y, float width, float height)
	{
		RenderRectX = x;
		RenderRectY = y;
		RenderRectWidth = width;
		RenderRectHeight = height;
	}

	/// <summary>
	/// Clamps crop and offset parameters against the active render rectangle and computes the D3D device viewport metrics.
	/// </summary>
	/// <param name="cropX">Horizontal crop origin.</param>
	/// <param name="cropY">Vertical crop origin.</param>
	/// <param name="width">Requested viewport width in pixels.</param>
	/// <param name="height">Requested viewport height in pixels.</param>
	/// <param name="offsetX">Horizontal viewport offset.</param>
	/// <param name="offsetY">Vertical viewport offset.</param>
	[Original(0x0082F308)]
	public static void ApplyDeviceViewport(int cropX, int cropY, int width, int height, int offsetX, int offsetY)
	{
		int leftExcess;
		if (offsetX > cropX)
		{
			DeviceViewportX = 0;
			leftExcess = -(cropX - offsetX);
		}
		else
		{
			DeviceViewportX = cropX - offsetX;
			leftExcess = 0;
		}

		int topExcess;
		int effectiveOffsetY;
		if (offsetY > cropY)
		{
			DeviceViewportY = 0;
			effectiveOffsetY = offsetY;
			topExcess = -(cropY - offsetY);
		}
		else
		{
			DeviceViewportY = cropY - offsetY;
			effectiveOffsetY = offsetY;
			topExcess = 0;
		}

		RenderOffsetX = (float)(-offsetX + (double)RenderRectX);
		RenderOffsetY = (float)(-effectiveOffsetY + (double)RenderRectY);

		int rightCrop = width + cropX - offsetX - (int)((double)RenderRectX + RenderRectWidth);
		int bottomCrop = height + cropY - effectiveOffsetY - (int)((double)RenderRectY + RenderRectHeight);
		if (rightCrop < 0)
			rightCrop = 0;
		if (bottomCrop < 0)
			bottomCrop = 0;

		int devWidth = width - (rightCrop + leftExcess);
		int devHeight = height - (bottomCrop + topExcess);
		DeviceViewportWidth = devWidth;
		DeviceViewportHeight = devHeight;
		DeviceScaleX = (float)(RenderRectWidth / (double)unchecked((uint)devWidth));
		DeviceScaleY = (float)(RenderRectHeight / (double)unchecked((uint)devHeight));
		AspectScaleX = (float)((double)unchecked((uint)width) / 640.0f);
		AspectScaleY = (float)((double)unchecked((uint)height) / 480.0f);
	}

	/// <summary>
	/// Updates the Ninja 2D clip window bounds either by scaling a 32x32 tile rectangle (<paramref name="mode"/> == 2) or using full screen extents.
	/// </summary>
	/// <param name="mode">Clip mode (<c>2</c> scales <paramref name="left"/>..<paramref name="bottom"/>; any other value uses full screen bounds).</param>
	/// <param name="left">Tile-space left bound when <paramref name="mode"/> equals two.</param>
	/// <param name="top">Tile-space top bound when <paramref name="mode"/> equals two.</param>
	/// <param name="right">Tile-space right bound when <paramref name="mode"/> equals two.</param>
	/// <param name="bottom">Tile-space bottom bound when <paramref name="mode"/> equals two.</param>
	[Original(0x0082AD14)]
	public static void SetClipWindow(int mode, float left, float top, float right, float bottom)
	{
		if (mode == 2)
		{
			ClipLeft = (float)((double)left * 32.0f);
			ClipTop = (float)((double)top * 32.0f);
			ClipRight = (float)((double)right * 32.0f + 31.0f);
			ClipBottom = (float)(32.0f * (double)bottom + 31.0f);
		}
		else
		{
			ClipLeft = 0.0f;
			ClipTop = 0.0f;
			ClipRight = (float)(-1.0f + (double)ScreenWidthFloat);
			ClipBottom = (float)(-1.0f + (double)ScreenHeightFloat);
		}

		if (ClipLeft <= 0.0f)
			ClipLeft = 0.0f;
		if (ClipTop <= 0.0f)
			ClipTop = 0.0f;
		if (ScreenWidthFloat <= ClipRight)
			ClipRight = (float)(ScreenWidthFloat + -1.0f);
		if (ScreenHeightFloat <= ClipBottom)
			ClipBottom = (float)(ScreenHeightFloat + -1.0f);
	}

	/// <summary>
	/// Clears the custom viewport apply flag (<c>0x200</c>) and resets the clip window to full-screen defaults.
	/// </summary>
	[Original(0x004D285C)]
	public static void ResetClipWindow()
	{
		FieldCameraController.Flags &= ~0x200u;
		SetClipWindow(0, 0.0f, 0.0f, 20.0f, 15.0f);
	}

	/// <summary>
	/// Resets cached display dimensions, zero crop offsets, render rectangle, and full-screen device viewport.
	/// </summary>
	/// <param name="displayWidth">The render surface width in pixels.</param>
	/// <param name="displayHeight">The render surface height in pixels.</param>
	[Original(0x004D26C4)]
	public static void ResetFullScreenRenderRect(int displayWidth, int displayHeight)
	{
		FieldCameraController.ScreenWidth = unchecked((short)displayWidth);
		FieldCameraController.ScreenHeight = unchecked((short)displayHeight);
		CropOffsetX = 0;
		CropOffsetY = 0;
		SetRenderRect(0.0f, 0.0f, (short)displayWidth, (short)displayHeight);
		ApplyDeviceViewport(0, 0, FieldCameraController.ScreenWidth, FieldCameraController.ScreenHeight, 0, 0);
	}

	/// <summary>
	/// Snapshots the active viewport parameters and resets the device viewport to full screen without center offset.
	/// </summary>
	/// <param name="displayWidth">The render surface width in pixels.</param>
	/// <param name="displayHeight">The render surface height in pixels.</param>
	[Original(0x004D28A4)]
	public static void SaveAndResetViewport(int displayWidth, int displayHeight)
	{
		SavedViewport = new CameraViewportSettings(
			HalfWidth,
			HalfHeight,
			ScaleX,
			ScaleY,
			0.0f,
			Width,
			Height,
			OriginX,
			OriginY,
			OffsetX,
			OffsetY,
			NearScale,
			FarScale);
		_savedScaledAspectX = ScaledAspectX;
		_savedScaledAspectY = ScaledAspectY;
		_savedUnitScale = UnitScale;
		_savedInverseScreenScaleX = InverseScreenScaleX;

		ApplyDeviceViewport(0, 0, displayWidth, displayHeight, 0, 0);
		ViewportOffsetActive = 0;
	}

	/// <summary>
	/// Restores the saved viewport snapshot, updates the center-offset flag, re-applies the device viewport, and refreshes field projection when active.
	/// </summary>
	/// <param name="displayWidth">The render surface width in pixels.</param>
	/// <param name="displayHeight">The render surface height in pixels.</param>
	/// <param name="updateProjection">Optional projection callback replacing <see cref="CameraProjection.CreateFieldProjection"/>.</param>
	[Original(0x004D2968)]
	public static void RestoreSavedViewport(
		int displayWidth,
		int displayHeight,
		Func<int, float, float, float, float>? updateProjection = null)
	{
		if (SavedViewport is { } saved)
		{
			ScaledAspectX = _savedScaledAspectX;
			ScaledAspectY = _savedScaledAspectY;
			HalfWidth = saved.HalfWidth;
			HalfHeight = saved.HalfHeight;
			ScaleY = saved.ScaleY;
			ScaleX = saved.ScaleX;
			UnitScale = _savedUnitScale;
			InverseScreenScaleX = _savedInverseScreenScaleX;
			Width = saved.Width;
			Height = saved.Height;
			OriginX = saved.X;
			OriginY = saved.Y;
			OffsetX = saved.OffsetX;
			OffsetY = saved.OffsetY;
			NearScale = saved.NearScale;
			FarScale = saved.FarScale;
		}

		int centerX = FieldCameraController.ScreenWidth >> 1;
		int centerY = FieldCameraController.ScreenHeight >> 1;
		double deltaX = -((double)HalfWidth - centerX);
		double deltaY = -((double)HalfHeight - centerY);
		ViewportOffsetActive = deltaX == 0.0 && deltaY == 0.0 ? (ushort)0 : (ushort)1;

		ApplyDeviceViewport(0, 0, displayWidth, displayHeight, (int)deltaX, (int)deltaY);
		if (FieldCameraController.Current is FieldCameraController controller)
		{
			if (updateProjection is not null)
				updateProjection(controller.FieldOfView, 1.1333334f, 1.0f, 21000.0f);
			else
				CameraProjection.CreateFieldProjection(controller.FieldOfView, 1.1333334f, 1.0f, 21000.0f, 480, out _, out _);
		}
	}

	/// <summary>
	/// Clears viewport offset state along with the active mode index and controller flags while leaving <see cref="FieldCameraController.PreviousModeIndex"/> intact.
	/// </summary>
	[Original(0x004D2AF0)]
	public static void ResetModeAndOffsetState()
	{
		ViewportOffsetActive = 0;
		FieldCameraController.ActiveModeIndex = 0;
		FieldCameraController.Flags = 0;
	}
}
