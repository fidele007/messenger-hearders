/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:23 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBDeferredComputation.h>

@class NSString;

@interface FBDeferredMapComputation : NSObject <FBDeferredComputation> {

	/*^block*/id _mapBlock;
	unsigned long long _type;

}

@property (nonatomic,copy,readonly) id mapBlock;                     //@synthesize mapBlock=_mapBlock - In the implementation block
@property (nonatomic,readonly) unsigned long long type;              //@synthesize type=_type - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithMapBlock:(/*^block*/id)arg1 ;
-(id)mapBlock;
-(unsigned long long)type;
@end

