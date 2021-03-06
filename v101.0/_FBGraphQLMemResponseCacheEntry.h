/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:35 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NSCoding;
@class NSDate, NSObject;

@interface _FBGraphQLMemResponseCacheEntry : NSObject {

	NSDate* _date;
	NSObject*<NSCoding> _attachment;
	id _response;

}

@property (nonatomic,copy,readonly) NSDate * date;                               //@synthesize date=_date - In the implementation block
@property (nonatomic,copy,readonly) NSObject*<NSCoding> attachment;              //@synthesize attachment=_attachment - In the implementation block
@property (nonatomic,readonly) id response;                                      //@synthesize response=_response - In the implementation block
-(id)initWithDate:(id)arg1 attachment:(id)arg2 response:(id)arg3 ;
-(NSDate *)date;
-(id)response;
-(NSObject*<NSCoding>)attachment;
@end

