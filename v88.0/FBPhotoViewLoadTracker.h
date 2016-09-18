/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:50 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBInvalidating.h>
#import <Messenger/FBWebImageViewListener.h>

@protocol FBPhotoViewLoadTrackerDelegate;
@class NSMapTable, NSString;

@interface FBPhotoViewLoadTracker : NSObject <FBInvalidating, FBWebImageViewListener> {

	NSMapTable* _photoViewMap;
	unsigned long long _targetCount;
	id<FBPhotoViewLoadTrackerDelegate> _delegate;
	BOOL _valid;
	unsigned long long _count;
	unsigned long long _fromCacheCount;

}

@property (nonatomic,readonly) unsigned long long count;                       //@synthesize count=_count - In the implementation block
@property (nonatomic,readonly) unsigned long long fromCacheCount;              //@synthesize fromCacheCount=_fromCacheCount - In the implementation block
@property (nonatomic,readonly) double cachedPercentage; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (getter=isValid,nonatomic,readonly) BOOL valid;                      //@synthesize valid=_valid - In the implementation block
-(void)webImageViewDidSetImage:(id)arg1 fromCache:(BOOL)arg2 ;
-(void)webImageView:(id)arg1 didUpdateLoadProgress:(double)arg2 ;
-(id)initWithTargetCount:(unsigned long long)arg1 delegate:(id)arg2 ;
-(void)addPhotoView:(id)arg1 ;
-(double)cachedPercentage;
-(void)_increaseCountFromCache:(BOOL)arg1 ;
-(void)_removePhotoView:(id)arg1 ;
-(unsigned long long)fromCacheCount;
-(unsigned long long)count;
-(void)invalidate;
-(BOOL)isValid;
@end

