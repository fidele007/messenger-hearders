/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:01 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface FBOmnistoreCollectionName : NSObject <NSCopying> {

	shared_ptr<facebook::omnistore::CollectionName>* _collectionName;
	NSString* _str;

}

@property (nonatomic,copy,readonly) NSString * str;              //@synthesize str=_str - In the implementation block
-(CollectionName)extractNativeCollectionName;
-(id)initWithCollectionName:(shared_ptr<facebook::omnistore::CollectionName>*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)str;
@end

