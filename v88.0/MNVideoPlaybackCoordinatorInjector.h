/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:45 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBViewerContextInjecting.h>

@protocol MNVideoAutoPlayStrategy;
@class FBProviderMapData, MNVideoPlaybackConfiguration, NSString;

@interface MNVideoPlaybackCoordinatorInjector : NSObject <FBViewerContextInjecting> {

	FBProviderMapData* _mapData;
	id<MNVideoAutoPlayStrategy> _videoAutoPlayStrategy;
	MNVideoPlaybackConfiguration* _videoPlaybackConfiguration;

}

@property (nonatomic,readonly) id<MNVideoAutoPlayStrategy> videoAutoPlayStrategy;                      //@synthesize videoAutoPlayStrategy=_videoAutoPlayStrategy - In the implementation block
@property (nonatomic,readonly) MNVideoPlaybackConfiguration * videoPlaybackConfiguration;              //@synthesize videoPlaybackConfiguration=_videoPlaybackConfiguration - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)instanceWithInjector:(id)arg1 ;
-(id)initWithProviderMapData:(id)arg1 ;
-(id<MNVideoAutoPlayStrategy>)videoAutoPlayStrategy;
-(MNVideoPlaybackConfiguration *)videoPlaybackConfiguration;
@end

