/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:49 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBPhotoViewLoadTrackerDelegate.h>
#import <Messenger/FBGraphQLConnectionSyncStoreListener.h>

@protocol FBGraphQLConnectionSyncStoreProtocol;
@class FBPhotoViewLoadTracker, NSString;

@interface FBPhotoGridPerfLogger : NSObject <FBPhotoViewLoadTrackerDelegate, FBGraphQLConnectionSyncStoreListener> {

	FBPhotoViewLoadTracker* _photoViewTracker;
	double _cachePercentage;
	id<FBGraphQLConnectionSyncStoreProtocol> _mediaSetStore;
	unsigned long long _startTime;
	unsigned long long _totalStartTime;
	double _firstPhotoTime;
	double _graphQLTime;
	double _graphQLTotalTime;
	unsigned long long _targetCount;
	long long _status;
	NSString* _module;
	NSString* _eventName;
	NSString* _graphQLResponseType;

}

@property (nonatomic,copy) NSString * module;                           //@synthesize module=_module - In the implementation block
@property (nonatomic,copy) NSString * eventName;                        //@synthesize eventName=_eventName - In the implementation block
@property (nonatomic,copy) NSString * graphQLResponseType;              //@synthesize graphQLResponseType=_graphQLResponseType - In the implementation block
@property (nonatomic,readonly) long long status;                        //@synthesize status=_status - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)module;
-(id)initWithModule:(id)arg1 mediaSetStore:(id)arg2 count:(unsigned long long)arg3 eventName:(id)arg4 ;
-(void)_stopIfReady;
-(void)cancelWithStatus:(id)arg1 ;
-(void)_stopWithStatus:(id)arg1 ;
-(void)addPhotoView:(id)arg1 ;
-(void)photoViewLoadTrackerDidFinishLoading:(id)arg1 count:(unsigned long long)arg2 fromCache:(BOOL)arg3 ;
-(void)connectionSyncStoreDidReachEnd:(id)arg1 ;
-(void)connectionSyncStore:(id)arg1 requestProvider:(id)arg2 didReceiveResponse:(id)arg3 fromCache:(BOOL)arg4 ;
-(void)connectionSyncStoreWillPerformRequest:(id)arg1 ;
-(id)initWithModule:(id)arg1 mediaSetStore:(id)arg2 count:(unsigned long long)arg3 ;
-(void)setModule:(NSString *)arg1 ;
-(NSString *)graphQLResponseType;
-(void)setGraphQLResponseType:(NSString *)arg1 ;
-(void)cancel;
-(void)start;
-(long long)status;
-(NSString *)eventName;
-(void)setEventName:(NSString *)arg1 ;
@end

