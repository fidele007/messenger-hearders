/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:40 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData, NSURL, NSString, NSDate;

@interface FBBrowserPrefetchData : FBValueObject <NSCoding, NSCopying> {

	BOOL _consumptionNotAllowed;
	BOOL _dataUsed;
	NSData* _data;
	NSURL* _URL;
	NSString* _MIMEType;
	NSString* _textEncodingName;
	NSDate* _prefetchDate;
	NSDate* _expiryDate;

}

@property (nonatomic,copy,readonly) NSData * data;                            //@synthesize data=_data - In the implementation block
@property (nonatomic,copy,readonly) NSURL * URL;                              //@synthesize URL=_URL - In the implementation block
@property (nonatomic,copy,readonly) NSString * MIMEType;                      //@synthesize MIMEType=_MIMEType - In the implementation block
@property (nonatomic,copy,readonly) NSString * textEncodingName;              //@synthesize textEncodingName=_textEncodingName - In the implementation block
@property (nonatomic,copy,readonly) NSDate * prefetchDate;                    //@synthesize prefetchDate=_prefetchDate - In the implementation block
@property (nonatomic,copy,readonly) NSDate * expiryDate;                      //@synthesize expiryDate=_expiryDate - In the implementation block
@property (nonatomic,readonly) BOOL consumptionNotAllowed;                    //@synthesize consumptionNotAllowed=_consumptionNotAllowed - In the implementation block
@property (nonatomic,readonly) BOOL dataUsed;                                 //@synthesize dataUsed=_dataUsed - In the implementation block
-(id)initWithData:(id)arg1 URL:(id)arg2 MIMEType:(id)arg3 textEncodingName:(id)arg4 prefetchDate:(id)arg5 expiryDate:(id)arg6 consumptionNotAllowed:(BOOL)arg7 dataUsed:(BOOL)arg8 ;
-(NSDate *)prefetchDate;
-(BOOL)consumptionNotAllowed;
-(NSDate *)expiryDate;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSData *)data;
-(NSURL *)URL;
-(NSString *)MIMEType;
-(NSString *)textEncodingName;
-(BOOL)dataUsed;
@end

