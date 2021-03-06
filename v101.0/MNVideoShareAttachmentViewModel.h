/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:20 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSURL, FBMMessageKey;

@interface MNVideoShareAttachmentViewModel : FBValueObject <NSCopying> {

	NSString* _title;
	NSString* _body;
	NSString* _videoID;
	double _aspectRatio;
	double _duration;
	NSString* _source;
	NSURL* _sourceURL;
	NSURL* _previewImageURL;
	FBMMessageKey* _messageKey;
	unsigned long long _soundButtonPosition;
	UIEdgeInsets _contentInsets;

}

@property (nonatomic,copy,readonly) NSString * title;                               //@synthesize title=_title - In the implementation block
@property (nonatomic,copy,readonly) NSString * body;                                //@synthesize body=_body - In the implementation block
@property (nonatomic,copy,readonly) NSString * videoID;                             //@synthesize videoID=_videoID - In the implementation block
@property (nonatomic,readonly) double aspectRatio;                                  //@synthesize aspectRatio=_aspectRatio - In the implementation block
@property (nonatomic,readonly) double duration;                                     //@synthesize duration=_duration - In the implementation block
@property (nonatomic,copy,readonly) NSString * source;                              //@synthesize source=_source - In the implementation block
@property (nonatomic,copy,readonly) NSURL * sourceURL;                              //@synthesize sourceURL=_sourceURL - In the implementation block
@property (nonatomic,copy,readonly) NSURL * previewImageURL;                        //@synthesize previewImageURL=_previewImageURL - In the implementation block
@property (nonatomic,copy,readonly) FBMMessageKey * messageKey;                     //@synthesize messageKey=_messageKey - In the implementation block
@property (nonatomic,readonly) UIEdgeInsets contentInsets;                          //@synthesize contentInsets=_contentInsets - In the implementation block
@property (nonatomic,readonly) unsigned long long soundButtonPosition;              //@synthesize soundButtonPosition=_soundButtonPosition - In the implementation block
-(FBMMessageKey *)messageKey;
-(NSString *)videoID;
-(unsigned long long)soundButtonPosition;
-(id)initWithTitle:(id)arg1 body:(id)arg2 videoID:(id)arg3 aspectRatio:(double)arg4 duration:(double)arg5 source:(id)arg6 sourceURL:(id)arg7 previewImageURL:(id)arg8 messageKey:(id)arg9 contentInsets:(UIEdgeInsets)arg10 soundButtonPosition:(unsigned long long)arg11 ;
-(double)duration;
-(NSString *)source;
-(NSString *)title;
-(UIEdgeInsets)contentInsets;
-(NSString *)body;
-(NSURL *)sourceURL;
-(double)aspectRatio;
-(NSURL *)previewImageURL;
@end

