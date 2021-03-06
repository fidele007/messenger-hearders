/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:52 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBExpandableNode.h>
#import <libobjc.A.dylib/MKMapViewDelegate.h>
#import <Messenger/FBMapSnapshotNodeDelegate.h>

@protocol FBExpandableMapNodeDelegate;
@class ASDisplayNode, FBMapSnapshotNode, NSArray, FBRichStoryBlockDisplayContext, FBUserSession, MKMapCamera, MKMapView, UIView, NSString;

@interface FBExpandableMapNode : FBExpandableNode <MKMapViewDelegate, FBMapSnapshotNodeDelegate> {

	ASDisplayNode* _mapNode;
	FBMapSnapshotNode* _snapshotNode;
	SCD_Struct_FB95 _region;
	NSArray* _annotations;
	unsigned long long _mapType;
	FBRichStoryBlockDisplayContext* _displayContext;
	FBUserSession* _session;
	BOOL _isShowingInteractiveMap;
	MKMapCamera* _collapsedCamera;
	MKMapCamera* _expandedCamera;
	struct {
		unsigned didFinishRenderingMapView : 1;
		unsigned allowedUserInteraction : 1;
		unsigned didFinishMovingToTourCamera : 1;
	}  _delegateFlags;
	BOOL _rotating;
	double _heading;
	id<FBExpandableMapNodeDelegate> _delegate;
	MKMapView* _mapView;
	long long _mapState;
	double _pitch;

}

@property (nonatomic,retain) MKMapView * mapView;                                          //@synthesize mapView=_mapView - In the implementation block
@property (nonatomic,readonly) CGSize mapSize; 
@property (assign,nonatomic) long long mapState;                                           //@synthesize mapState=_mapState - In the implementation block
@property (assign,nonatomic) double heading;                                               //@synthesize heading=_heading - In the implementation block
@property (assign,nonatomic) double pitch;                                                 //@synthesize pitch=_pitch - In the implementation block
@property (nonatomic,readonly) UIView * mapTileContainerView; 
@property (assign,nonatomic,__weak) id<FBExpandableMapNodeDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,getter=isRotating,nonatomic) BOOL rotating;                              //@synthesize rotating=_rotating - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_staticInitialize;
-(void)snapshotNodeDidDisplay:(id)arg1 ;
-(id)initWithCoordinateRegion:(SCD_Struct_FB96)arg1 session:(id)arg2 displayContext:(id)arg3 annotations:(id)arg4 mapType:(unsigned long long)arg5 ;
-(BOOL)containsPinAtPoint:(CGPoint)arg1 ;
-(void)moveCameraToTourCamera:(id)arg1 ;
-(void)setMapState:(long long)arg1 ;
-(void)_replaceSnapshotWithInteractiveMap;
-(void)_replaceInteractiveMapWithSnapshot;
-(void)_updateMapCameraWithExpansionProgress:(double)arg1 ;
-(void)_updateInteractiveMapTransform;
-(UIView *)mapTileContainerView;
-(void)_resetInteractiveMapTransform;
-(CLLocationCoordinate2D)_interpolateCenterFromStartingCenter:(CLLocationCoordinate2D)arg1 endingCenter:(CLLocationCoordinate2D)arg2 progress:(double)arg3 ;
-(double)_interpolateValueWithStartingValue:(double)arg1 endingValue:(double)arg2 progress:(double)arg3 ;
-(void)_selectAnnotationClosestToMapViewCameraAnimated:(BOOL)arg1 ;
-(id)_annotationClosestToMapViewCamera;
-(long long)mapState;
-(void)didCollapse;
-(void)didUpdateForExpansionProgress:(double)arg1 ;
-(void)willCollapseWithAnimationConfiguration:(SCD_Struct_FB94)arg1 ;
-(void)willExpandWithAnimationConfiguration:(SCD_Struct_FB94)arg1 ;
-(void)didExpand;
-(void)didBeginExpansionInteractionAtPoint:(CGPoint)arg1 ;
-(void)setDelegate:(id<FBExpandableMapNodeDelegate>)arg1 ;
-(id<FBExpandableMapNodeDelegate>)delegate;
-(BOOL)isRotating;
-(void)layout;
-(void)setRotating:(BOOL)arg1 ;
-(void)setHeading:(double)arg1 ;
-(double)heading;
-(void)setPitch:(double)arg1 ;
-(double)pitch;
-(void)setMapView:(MKMapView *)arg1 ;
-(void)mapViewDidFinishRenderingMap:(id)arg1 fullyRendered:(BOOL)arg2 ;
-(id)mapView:(id)arg1 viewForAnnotation:(id)arg2 ;
-(MKMapView *)mapView;
-(CGSize)mapSize;
@end

