/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:33 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBPhotoStoryContainer.h>

@protocol FBPhotoStoryContainerDelegate;
@class FBMemStoryAttachment, FBMemFeedStory, NSString;

@interface FBPhotoStoryStoryContainer : NSObject <FBPhotoStoryContainer> {

	FBMemStoryAttachment* _attachment;
	FBMemFeedStory* _story;
	id<FBPhotoStoryContainerDelegate> _delegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<FBPhotoStoryContainerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)_didUpdateStory:(id)arg1 ;
-(id)mediaSet;
-(id)story;
-(id)initWithStory:(id)arg1 attachment:(id)arg2 andGetLiveUpdatesFrom:(id)arg3 ;
-(void)setDelegate:(id<FBPhotoStoryContainerDelegate>)arg1 ;
-(id<FBPhotoStoryContainerDelegate>)delegate;
-(id)navigationBarTitle;
@end
