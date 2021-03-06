/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:12 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class LPPhoneNumber, NSString;

@interface FBAddressBookContactPhoneNumber : FBValueObject <NSCopying> {

	LPPhoneNumber* _number;
	NSString* _type;

}

@property (nonatomic,copy,readonly) LPPhoneNumber * number;              //@synthesize number=_number - In the implementation block
@property (nonatomic,copy,readonly) NSString * type;                     //@synthesize type=_type - In the implementation block
-(id)initWithNumber:(id)arg1 type:(id)arg2 ;
-(NSString *)type;
-(LPPhoneNumber *)number;
@end

