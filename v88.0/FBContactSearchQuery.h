/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:57 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSSet;

@interface FBContactSearchQuery : FBValueObject <NSCopying> {

	NSString* _text;
	NSSet* _pickedIds;

}

@property (nonatomic,copy,readonly) NSString * text;                //@synthesize text=_text - In the implementation block
@property (nonatomic,copy,readonly) NSSet * pickedIds;              //@synthesize pickedIds=_pickedIds - In the implementation block
-(id)initWithText:(id)arg1 pickedIds:(id)arg2 ;
-(NSSet *)pickedIds;
-(NSString *)text;
@end

