/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:51 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface FBMPersonWorkIdentityTypeProperties : FBValueObject <NSCoding, NSCopying> {

	NSString* _companyID;
	NSString* _jobTitle;

}

@property (nonatomic,copy,readonly) NSString * companyID;              //@synthesize companyID=_companyID - In the implementation block
@property (nonatomic,copy,readonly) NSString * jobTitle;               //@synthesize jobTitle=_jobTitle - In the implementation block
-(id)initWithCompanyID:(id)arg1 jobTitle:(id)arg2 ;
-(NSString *)companyID;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)jobTitle;
@end

