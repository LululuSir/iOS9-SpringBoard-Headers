/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:55 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UINavigationController.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSArray, NSMutableDictionary, UIView;

@interface UIImagePickerController : UINavigationController <NSCoding> {

	long long _sourceType;
	id _image;
	CGRect _cropRect;
	NSArray* _mediaTypes;
	NSMutableDictionary* _properties;
	int _previousStatusBarStyle;
	BOOL _previousStatusBarHidden;
	struct {
		unsigned visible : 1;
		unsigned isCleaningUp : 1;
		unsigned savingOptions : 3;
		unsigned didRevertStatusBar : 1;
	}  _imagePickerFlags;

}

@property (assign,nonatomic,__weak) id<UINavigationControllerDelegate><UIImagePickerControllerDelegate> delegate; 
@property (assign,nonatomic) long long sourceType; 
@property (nonatomic,copy) NSArray * mediaTypes; 
@property (assign,nonatomic) BOOL allowsEditing; 
@property (assign,nonatomic) BOOL allowsImageEditing; 
@property (assign,nonatomic) double videoMaximumDuration; 
@property (assign,nonatomic) long long videoQuality; 
@property (assign,nonatomic) BOOL showsCameraControls; 
@property (nonatomic,retain) UIView * cameraOverlayView; 
@property (assign,nonatomic) CGAffineTransform cameraViewTransform; 
@property (assign,nonatomic) long long cameraCaptureMode; 
@property (assign,nonatomic) long long cameraDevice; 
@property (assign,nonatomic) long long cameraFlashMode; 
+(id)aaui_fixedCropRect:(id)arg1 forOriginalImage:(id)arg2 ;
+(BOOL)isSourceTypeAvailable:(long long)arg1 ;
+(BOOL)_isMediaTypeAvailable:(id)arg1 forSource:(long long)arg2 ;
+(BOOL)isCameraDeviceAvailable:(long long)arg1 ;
+(BOOL)_reviewCapturedItems;
+(id)availableMediaTypesForSourceType:(long long)arg1 ;
+(id)availableCaptureModesForCameraDevice:(long long)arg1 ;
+(BOOL)isFlashAvailableForCameraDevice:(long long)arg1 ;
-(BOOL)ckCanDismissWhenSuspending;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(unsigned long long)supportedInterfaceOrientations;
-(BOOL)shouldAutorotateToInterfaceOrientation:(long long)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)_populateArchivedChildViewControllers:(id)arg1 ;
-(void)viewWillUnload;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(BOOL)_isSupportedInterfaceOrientation:(long long)arg1 ;
-(CGSize)_adjustedContentSizeForPopover:(CGSize)arg1 ;
-(id)_valueForProperty:(id)arg1 ;
-(long long)sourceType;
-(void)_setAllowsImageEditing:(BOOL)arg1 ;
-(BOOL)_allowsImageEditing;
-(void)setCameraCaptureMode:(long long)arg1 ;
-(void)_setupControllersForCurrentSourceType;
-(void)_updateCameraCaptureMode;
-(void)_setupControllersForCurrentMediaTypes;
-(void)_setValue:(id)arg1 forProperty:(id)arg2 ;
-(void)_initializeProperties;
-(BOOL)_sourceTypeIsCamera;
-(id)_cameraViewController;
-(BOOL)_isCameraCaptureModeValid:(long long)arg1 ;
-(void)_removeAllChildren;
-(void)setSourceType:(long long)arg1 ;
-(id)_createInitialController;
-(void)_autoDismiss;
-(void)_imagePickerDidCancel;
-(void)_imagePickerDidCompleteWithInfo:(id)arg1 ;
-(id)_initWithSourceImageData:(id)arg1 cropRect:(CGRect)arg2 ;
-(void)setMediaTypes:(NSArray *)arg1 ;
-(NSArray *)mediaTypes;
-(BOOL)_allowsMultipleSelection;
-(void)_setAllowsMultipleSelection:(BOOL)arg1 ;
-(BOOL)_allowsIris;
-(void)_setAllowsIris:(BOOL)arg1 ;
-(BOOL)allowsImageEditing;
-(void)setAllowsImageEditing:(BOOL)arg1 ;
-(BOOL)allowsEditing;
-(void)setAllowsEditing:(BOOL)arg1 ;
-(double)videoMaximumDuration;
-(void)setVideoMaximumDuration:(double)arg1 ;
-(long long)videoQuality;
-(void)setVideoQuality:(long long)arg1 ;
-(void)_setProperties:(id)arg1 ;
-(id)_properties;
-(void)_setImagePickerSavingOptions:(unsigned long long)arg1 ;
-(unsigned long long)_imagePickerSavingOptions;
-(BOOL)showsCameraControls;
-(void)setShowsCameraControls:(BOOL)arg1 ;
-(UIView *)cameraOverlayView;
-(void)setCameraOverlayView:(UIView *)arg1 ;
-(CGAffineTransform)cameraViewTransform;
-(void)setCameraViewTransform:(CGAffineTransform)arg1 ;
-(void)takePicture;
-(BOOL)startVideoCapture;
-(void)stopVideoCapture;
-(long long)cameraDevice;
-(void)setCameraDevice:(long long)arg1 ;
-(long long)cameraCaptureMode;
-(long long)cameraFlashMode;
-(void)setCameraFlashMode:(long long)arg1 ;
-(BOOL)_didRevertStatusBar;
-(void)_imagePickerDidCompleteWithInfoArray:(id)arg1 ;
@end

