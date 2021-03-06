/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:00 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface FBComposerTitleTextBehaviour : NSObject <NSCoding, NSCopying> {

	unsigned long long _subtype;
	NSString* _staticTitle;
	NSString* _swappedBasedOnReview_titleWhenShowingReview;
	NSString* _swappedBasedOnReview_titleWhenNotShowingReview;
	NSString* _swappedWhenAuthorPublishingToOwnTimeline_titleWhenPostingToOwnTimeline;
	NSString* _swappedWhenAttachmentsChanged_defaultTitle;

}
+(id)swappedBasedOnReviewWithTitleWhenShowingReview:(id)arg1 titleWhenNotShowingReview:(id)arg2 ;
+(id)swappedWhenAttachmentsChangedWithDefaultTitle:(id)arg1 ;
+(id)swappedWhenAuthorPublishingToOwnTimelineWithTitleWhenPostingToOwnTimeline:(id)arg1 ;
+(id)useDisplayNameOfTarget;
+(id)staticTitle:(id)arg1 ;
-(void)matchStaticTitle:(/*^block*/id)arg1 useDisplayNameOfTarget:(/*^block*/id)arg2 swappedBasedOnReview:(/*^block*/id)arg3 swappedWhenAuthorPublishingToOwnTimeline:(/*^block*/id)arg4 swappedWhenAttachmentsChanged:(/*^block*/id)arg5 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

