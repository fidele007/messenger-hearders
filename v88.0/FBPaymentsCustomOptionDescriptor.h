/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:51 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSArray;

@interface FBPaymentsCustomOptionDescriptor : FBValueObject <NSCopying> {

	NSString* _customOptionTitle;
	NSString* _actionableText;
	NSArray* _fieldsDefinition;

}

@property (nonatomic,copy,readonly) NSString * customOptionTitle;              //@synthesize customOptionTitle=_customOptionTitle - In the implementation block
@property (nonatomic,copy,readonly) NSString * actionableText;                 //@synthesize actionableText=_actionableText - In the implementation block
@property (nonatomic,copy,readonly) NSArray * fieldsDefinition;                //@synthesize fieldsDefinition=_fieldsDefinition - In the implementation block
-(id)initWithCustomOptionTitle:(id)arg1 actionableText:(id)arg2 fieldsDefinition:(id)arg3 ;
-(NSString *)actionableText;
-(NSArray *)fieldsDefinition;
-(NSString *)customOptionTitle;
@end

