/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:58 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Messenger/Messenger-Structs.h>
@class NSArray, MKMapSnapshotter, FBUserSession, NSString;

@interface FBMapSnapshotRequest : NSObject {

	BOOL _showPointsOfInterest;
	BOOL _cancelled;
	NSArray* _overlayProviders;
	unsigned long long _mapType;
	MKMapSnapshotter* _snapshotter;
	FBUserSession* _session;
	/*^block*/id _completion;
	NSString* _routeKey;
	CGSize _size;
	SCD_Struct_FB95 _region;

}

@property (nonatomic,retain) MKMapSnapshotter * snapshotter;              //@synthesize snapshotter=_snapshotter - In the implementation block
@property (nonatomic,readonly) CGSize size;                               //@synthesize size=_size - In the implementation block
@property (nonatomic,readonly) SCD_Struct_FB96 region;                    //@synthesize region=_region - In the implementation block
@property (nonatomic,readonly) FBUserSession * session;                   //@synthesize session=_session - In the implementation block
@property (nonatomic,copy) id completion;                                 //@synthesize completion=_completion - In the implementation block
@property (getter=isCancelled) BOOL cancelled;                            //@synthesize cancelled=_cancelled - In the implementation block
@property (nonatomic,readonly) NSString * diskCacheKey; 
@property (nonatomic,readonly) NSString * routeKey;                       //@synthesize routeKey=_routeKey - In the implementation block
@property (nonatomic,copy) NSArray * overlayProviders;                    //@synthesize overlayProviders=_overlayProviders - In the implementation block
@property (assign,nonatomic) unsigned long long mapType;                  //@synthesize mapType=_mapType - In the implementation block
@property (assign,nonatomic) BOOL showPointsOfInterest;                   //@synthesize showPointsOfInterest=_showPointsOfInterest - In the implementation block
-(id)initWithSize:(CGSize)arg1 region:(SCD_Struct_FB96)arg2 session:(id)arg3 ;
-(void)setOverlayProviders:(NSArray *)arg1 ;
-(NSString *)diskCacheKey;
-(void)setShowPointsOfInterest:(BOOL)arg1 ;
-(MKMapSnapshotter *)snapshotter;
-(NSString *)routeKey;
-(void)callCompletionWithImage:(CGImageRef)arg1 withUserInfo:(id)arg2 ;
-(BOOL)showPointsOfInterest;
-(void)setSnapshotter:(MKMapSnapshotter *)arg1 ;
-(NSArray *)overlayProviders;
-(void)cancel;
-(CGSize)size;
-(id)debugDescription;
-(void)stop;
-(BOOL)isCancelled;
-(void)setCancelled:(BOOL)arg1 ;
-(id)completion;
-(void)setCompletion:(id)arg1 ;
-(SCD_Struct_FB96)region;
-(unsigned long long)mapType;
-(void)setMapType:(unsigned long long)arg1 ;
-(FBUserSession *)session;
@end

