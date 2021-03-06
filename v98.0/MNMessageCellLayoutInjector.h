/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:56 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBInjecting.h>

@protocol FBClock, MNMessagePhotosLayoutStrategy;
@class FBProviderMapData, MNCoreTextSizeCache, MNBubbleContentPositioner, MNAttachmentStyleRendererManager, MNPhotosLayoutConfiguration, MNVideoStickersLayoutConfiguration, NSString;

@interface MNMessageCellLayoutInjector : NSObject <FBInjecting> {

	FBProviderMapData* _mapData;
	MNCoreTextSizeCache* _textSizeCache;
	id<FBClock> _clock;
	MNBubbleContentPositioner* _bubbleContentPositioner;
	MNAttachmentStyleRendererManager* _attachmentStyleRendererManager;
	id<MNMessagePhotosLayoutStrategy> _photosLayoutStrategy;
	MNPhotosLayoutConfiguration* _photosLayoutConfiguration;
	MNVideoStickersLayoutConfiguration* _videoStickersLayoutConfiguration;

}

@property (nonatomic,readonly) MNCoreTextSizeCache * textSizeCache;                                                //@synthesize textSizeCache=_textSizeCache - In the implementation block
@property (nonatomic,readonly) id<FBClock> clock;                                                                  //@synthesize clock=_clock - In the implementation block
@property (nonatomic,readonly) MNBubbleContentPositioner * bubbleContentPositioner;                                //@synthesize bubbleContentPositioner=_bubbleContentPositioner - In the implementation block
@property (nonatomic,readonly) MNAttachmentStyleRendererManager * attachmentStyleRendererManager;                  //@synthesize attachmentStyleRendererManager=_attachmentStyleRendererManager - In the implementation block
@property (nonatomic,readonly) id<MNMessagePhotosLayoutStrategy> photosLayoutStrategy;                             //@synthesize photosLayoutStrategy=_photosLayoutStrategy - In the implementation block
@property (nonatomic,readonly) MNPhotosLayoutConfiguration * photosLayoutConfiguration;                            //@synthesize photosLayoutConfiguration=_photosLayoutConfiguration - In the implementation block
@property (nonatomic,readonly) MNVideoStickersLayoutConfiguration * videoStickersLayoutConfiguration;              //@synthesize videoStickersLayoutConfiguration=_videoStickersLayoutConfiguration - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)instanceWithInjector:(id)arg1 ;
-(id)initWithProviderMapData:(id)arg1 ;
-(MNPhotosLayoutConfiguration *)photosLayoutConfiguration;
-(MNBubbleContentPositioner *)bubbleContentPositioner;
-(MNVideoStickersLayoutConfiguration *)videoStickersLayoutConfiguration;
-(MNCoreTextSizeCache *)textSizeCache;
-(id<MNMessagePhotosLayoutStrategy>)photosLayoutStrategy;
-(MNAttachmentStyleRendererManager *)attachmentStyleRendererManager;
-(id<FBClock>)clock;
@end

