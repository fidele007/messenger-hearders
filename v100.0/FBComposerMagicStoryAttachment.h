/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:34 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSString, NSArray;

@interface FBComposerMagicStoryAttachment : FBValueObject <NSCopying, NSCoding> {

	NSString* _uniqueCollectionID;
	NSArray* _mediaAttachments;

}

@property (nonatomic,copy,readonly) NSString * uniqueCollectionID;              //@synthesize uniqueCollectionID=_uniqueCollectionID - In the implementation block
@property (nonatomic,copy,readonly) NSArray * mediaAttachments;                 //@synthesize mediaAttachments=_mediaAttachments - In the implementation block
-(NSString *)uniqueCollectionID;
-(id)initWithUniqueCollectionID:(id)arg1 mediaAttachments:(id)arg2 ;
-(NSArray *)mediaAttachments;
@end
