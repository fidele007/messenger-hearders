/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:07 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBObjectReference.h>

@class NSString;

@interface FBIvarReference : NSObject <FBObjectReference> {

	NSString* _name;
	unsigned long long _type;
	long long _offset;
	unsigned long long _index;
	objc_ivarRef _ivar;

}

@property (nonatomic,copy,readonly) NSString * name;                  //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) unsigned long long type;               //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) long long offset;                      //@synthesize offset=_offset - In the implementation block
@property (nonatomic,readonly) unsigned long long index;              //@synthesize index=_index - In the implementation block
@property (nonatomic,readonly) objc_ivarRef ivar;                     //@synthesize ivar=_ivar - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)namePath;
-(id)objectReferenceFromObject:(id)arg1 ;
-(unsigned long long)_convertEncodingToType:(const char*)arg1 ;
-(id)initWithIvar:(objc_ivarRef)arg1 ;
-(unsigned long long)indexInIvarLayout;
-(objc_ivarRef)ivar;
-(NSString *)description;
-(NSString *)name;
-(unsigned long long)type;
-(long long)offset;
-(unsigned long long)index;
@end

