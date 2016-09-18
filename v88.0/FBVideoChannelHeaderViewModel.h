/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:57 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface FBVideoChannelHeaderViewModel : FBValueObject <NSCopying> {

	BOOL _shouldShowLiveLabel;
	BOOL _isVerified;
	long long _liveVideoCount;
	NSString* _liveLabelText;
	NSString* _profilePictureUri;
	NSString* _videoChannelTitle;
	NSString* _videoChannelSubtitle;
	unsigned long long _videoChannelHeaderStyle;

}

@property (nonatomic,readonly) BOOL shouldShowLiveLabel;                                //@synthesize shouldShowLiveLabel=_shouldShowLiveLabel - In the implementation block
@property (nonatomic,readonly) long long liveVideoCount;                                //@synthesize liveVideoCount=_liveVideoCount - In the implementation block
@property (nonatomic,copy,readonly) NSString * liveLabelText;                           //@synthesize liveLabelText=_liveLabelText - In the implementation block
@property (nonatomic,copy,readonly) NSString * profilePictureUri;                       //@synthesize profilePictureUri=_profilePictureUri - In the implementation block
@property (nonatomic,readonly) BOOL isVerified;                                         //@synthesize isVerified=_isVerified - In the implementation block
@property (nonatomic,copy,readonly) NSString * videoChannelTitle;                       //@synthesize videoChannelTitle=_videoChannelTitle - In the implementation block
@property (nonatomic,copy,readonly) NSString * videoChannelSubtitle;                    //@synthesize videoChannelSubtitle=_videoChannelSubtitle - In the implementation block
@property (nonatomic,readonly) unsigned long long videoChannelHeaderStyle;              //@synthesize videoChannelHeaderStyle=_videoChannelHeaderStyle - In the implementation block
-(NSString *)profilePictureUri;
-(NSString *)videoChannelSubtitle;
-(NSString *)videoChannelTitle;
-(id)initWithShouldShowLiveLabel:(BOOL)arg1 liveVideoCount:(long long)arg2 liveLabelText:(id)arg3 profilePictureUri:(id)arg4 isVerified:(BOOL)arg5 videoChannelTitle:(id)arg6 videoChannelSubtitle:(id)arg7 videoChannelHeaderStyle:(unsigned long long)arg8 ;
-(BOOL)shouldShowLiveLabel;
-(long long)liveVideoCount;
-(NSString *)liveLabelText;
-(unsigned long long)videoChannelHeaderStyle;
-(BOOL)isVerified;
@end

