/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:04 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Messenger/Messenger-Structs.h>
@class NSString, NSNumber;

@interface FBDiskCacheConfigBuilder : NSObject {

	BOOL _sessionScoped;
	BOOL _localeSensitive;
	unsigned _diskArea;
	NSString* _name;
	NSNumber* _version;
	NSNumber* _maxCapacity;

}

@property (nonatomic,copy) NSString * name;                     //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) BOOL sessionScoped;                //@synthesize sessionScoped=_sessionScoped - In the implementation block
@property (assign,nonatomic) unsigned diskArea;                 //@synthesize diskArea=_diskArea - In the implementation block
@property (assign,nonatomic) BOOL localeSensitive;              //@synthesize localeSensitive=_localeSensitive - In the implementation block
@property (nonatomic,copy) NSNumber * version;                  //@synthesize version=_version - In the implementation block
@property (nonatomic,copy) NSNumber * maxCapacity;              //@synthesize maxCapacity=_maxCapacity - In the implementation block
-(void)setSessionScoped:(BOOL)arg1 ;
-(void)setDiskArea:(unsigned)arg1 ;
-(void)setLocaleSensitive:(BOOL)arg1 ;
-(BOOL)sessionScoped;
-(unsigned)diskArea;
-(BOOL)localeSensitive;
-(id)init;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(void)setVersion:(NSNumber *)arg1 ;
-(NSNumber *)version;
-(void)setMaxCapacity:(NSNumber *)arg1 ;
-(NSNumber *)maxCapacity;
-(DiskCacheConfig)build;
@end

