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
}
