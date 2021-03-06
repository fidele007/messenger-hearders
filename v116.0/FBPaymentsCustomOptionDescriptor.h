/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:52 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FBSharedFramework/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSArray;

@interface FBPaymentsCustomOptionDescriptor : FBValueObject <NSCopying> {

	NSString* _customOptionTitle;
	NSString* _actionableText;
	NSArray* _fieldsDefinition;
	NSString* _disclaimer;

}

@property (nonatomic,copy,readonly) NSString * customOptionTitle;              //@synthesize customOptionTitle=_customOptionTitle - In the implementation block
@property (nonatomic,copy,readonly) NSString * actionableText;                 //@synthesize actionableText=_actionableText - In the implementation block
@property (nonatomic,copy,readonly) NSArray * fieldsDefinition;                //@synthesize fieldsDefinition=_fieldsDefinition - In the implementation block
@property (nonatomic,copy,readonly) NSString * disclaimer;                     //@synthesize disclaimer=_disclaimer - In the implementation block
-(id)initWithCustomOptionTitle:(id)arg1 actionableText:(id)arg2 fieldsDefinition:(id)arg3 disclaimer:(id)arg4 ;
-(NSString *)disclaimer;
-(NSString *)actionableText;
-(NSArray *)fieldsDefinition;
-(NSString *)customOptionTitle;
@end

