/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:54 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSCoding.h>

@class NSString, FBNuxCatalogRecord;

@interface FBNuxCatalogRecordList : NSObject <NSCoding> {

	NSString* _event;
	FBNuxCatalogRecord* _mostRecentRecord;
	unsigned long long _count;

}

@property (nonatomic,copy,readonly) NSString * event;                              //@synthesize event=_event - In the implementation block
@property (nonatomic,readonly) FBNuxCatalogRecord * mostRecentRecord;              //@synthesize mostRecentRecord=_mostRecentRecord - In the implementation block
@property (nonatomic,readonly) unsigned long long count;                           //@synthesize count=_count - In the implementation block
-(id)initWithRecord:(id)arg1 count:(unsigned long long)arg2 ;
-(FBNuxCatalogRecord *)mostRecentRecord;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)count;
-(id)description;
-(NSString *)event;
@end

