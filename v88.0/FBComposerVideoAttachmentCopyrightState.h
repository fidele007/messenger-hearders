/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:03 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSString, NSNumber;

@interface FBComposerVideoAttachmentCopyrightState : FBValueObject <NSCopying, NSCoding> {

	BOOL _hasDetectedCopyright;
	NSString* _fbid;
	unsigned long long _category;
	NSNumber* _score;

}

@property (nonatomic,readonly) BOOL hasDetectedCopyright;                //@synthesize hasDetectedCopyright=_hasDetectedCopyright - In the implementation block
@property (nonatomic,copy,readonly) NSString * fbid;                     //@synthesize fbid=_fbid - In the implementation block
@property (nonatomic,readonly) unsigned long long category;              //@synthesize category=_category - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * score;                    //@synthesize score=_score - In the implementation block
-(NSString *)fbid;
-(id)initWithHasDetectedCopyright:(BOOL)arg1 fbid:(id)arg2 category:(unsigned long long)arg3 score:(id)arg4 ;
-(BOOL)hasDetectedCopyright;
-(unsigned long long)category;
-(NSNumber *)score;
@end

