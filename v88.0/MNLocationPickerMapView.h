/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:49 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>
#import <Messenger/MNLocationPickerMapGestureRecognizerDelegate.h>
#import <libobjc.A.dylib/MKMapViewDelegate.h>

@protocol MNLocationPickerMapViewDelegate;
@class MKMapView, UIButton, UIImageView, MNLocationPickerMapGestureRecognizer, CLLocation, NSString;

@interface MNLocationPickerMapView : UIView <MNLocationPickerMapGestureRecognizerDelegate, MKMapViewDelegate> {

	MKMapView* _mapView;
	UIButton* _mapResetButton;
	BOOL _shouldHidePin;
	UIImageView* _pinImageView;
	CLLocationCoordinate2D _manuallySetCenterCoordinate;
	MNLocationPickerMapGestureRecognizer* _gestureRecognizer;
	id<MNLocationPickerMapViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MNLocationPickerMapViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) CLLocationCoordinate2D centerCoordinate; 
@property (nonatomic,readonly) CLLocation * userLocation; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_resetButtonTapped;
-(void)_didStartDragging;
-(void)gestureRecognizerDidDetectTap:(id)arg1 ;
-(void)gestureRecognizerDidDetectDragging:(id)arg1 ;
-(void)gestureRecognizerDidDetectZooming:(id)arg1 ;
-(void)setUserTrackingEnabled:(BOOL)arg1 ;
-(void)setResetButtonHidden:(BOOL)arg1 ;
-(void)setLocationPickerPinHidden:(BOOL)arg1 ;
-(void)_layoutPinImageView;
-(void)_setUserTrackingModeFollow;
-(void)_setUserTrackingModeNone;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<MNLocationPickerMapViewDelegate>)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(id<MNLocationPickerMapViewDelegate>)delegate;
-(CLLocationCoordinate2D)centerCoordinate;
-(void)setCenterCoordinate:(CLLocationCoordinate2D)arg1 ;
-(CLLocation *)userLocation;
-(void)mapView:(id)arg1 regionDidChangeAnimated:(BOOL)arg2 ;
@end
