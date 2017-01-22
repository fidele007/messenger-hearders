/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:24 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBGraphQLInput.h>

@class FBDateInput, NSString;

@interface FBAttachmentLifeEventWorkInfo : FBGraphQLInput {

	FBDateInput* _endDate;
	NSString* _current;
	NSString* _employerId;

}

@property (nonatomic,copy) FBDateInput * endDate;              //@synthesize endDate=_endDate - In the implementation block
@property (nonatomic,copy) NSString * current;                 //@synthesize current=_current - In the implementation block
@property (nonatomic,copy) NSString * employerId;              //@synthesize employerId=_employerId - In the implementation block
-(const FBGraphQLInputField*)fieldsMetadataWithOutLength:(out int*)arg1 ;
-(NSString *)employerId;
-(void)setEmployerId:(NSString *)arg1 ;
-(NSString *)current;
-(void)setCurrent:(NSString *)arg1 ;
-(void)setEndDate:(FBDateInput *)arg1 ;
-(FBDateInput *)endDate;
@end
