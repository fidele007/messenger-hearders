/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:49 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>
#import <Messenger/MNLocationPickerMapGestureRecognizerDelegate.h>
#import <libobjc.A.dylib/MKMapViewDelegate.h>

@protocol MNMessageLiveLocationTrayMapViewDelegate;
@class MKMapView, MNMessageLiveLocationTrayMapViewModel, UIButton, CLLocation, MNLocationPickerMapGestureRecognizer, NSString;

@interface MNMessageLiveLocationTrayMapView : UIView <MNLocationPickerMapGestureRecognizerDelegate, MKMapViewDelegate> {

	MKMapView* _mapView;
	MNMessageLiveLocationTrayMapViewModel* _viewModel;
	UIButton* _sendButton;
	UIButton* _stopButton;
	CLLocation* _viewerLocation;
	MNLocationPickerMapGestureRecognizer* _gestureRecognizer;
	BOOL _shouldMoveMapAsViewerLocationChanges;
	id<MNMessageLiveLocationTrayMapViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MNMessageLiveLocationTrayMapViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_didStartDragging;
-(void)gestureRecognizerDidDetectTap:(id)arg1 ;
-(void)gestureRecognizerDidDetectDragging:(id)arg1 ;
-(void)gestureRecognizerDidDetectZooming:(id)arg1 ;
-(void)_sendButtonTapped:(id)arg1 ;
-(void)_initializeStopButtonIfNecessary;
-(void)_initializeSendButtonIfNecessary;
-(void)_removeLiveLocationAnnotations;
-(void)_setMapRegionIfNecessary;
-(id)_pointsOnMap;
-(unsigned long long)_directionsTransportTypeForCurrentLocation;
-(void)_etaComputationDidSucceedWithEtaTimeInMinutes:(long long)arg1 etaDistance:(double)arg2 annotationView:(id)arg3 ;
-(void)_computeEtaAndShowBubbleViewForAnnotationView:(id)arg1 ;
-(void)_showBubbleViewWithExpirationTimeForAnnotationView:(id)arg1 ;
-(id)initWithInitialUserLocation:(id)arg1 ;
-(void)setMapRegionToDisplayAllAnnotations;
-(void)hideAllAnnotationBubbleViews;
-(void)setDelegate:(id<MNMessageLiveLocationTrayMapViewDelegate>)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(id<MNMessageLiveLocationTrayMapViewDelegate>)delegate;
-(void)_stopButtonTapped:(id)arg1 ;
-(void)setViewModel:(id)arg1 ;
-(void)mapView:(id)arg1 didAddAnnotationViews:(id)arg2 ;
-(id)mapView:(id)arg1 viewForAnnotation:(id)arg2 ;
-(void)mapView:(id)arg1 didSelectAnnotationView:(id)arg2 ;
-(void)mapView:(id)arg1 didDeselectAnnotationView:(id)arg2 ;
-(void)mapView:(id)arg1 didUpdateUserLocation:(id)arg2 ;
@end

