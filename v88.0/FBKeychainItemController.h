/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:06 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBBaseKeychainStoreDelegate.h>

@class NSString;

@interface FBKeychainItemController : NSObject <FBBaseKeychainStoreDelegate> {

	NSString* _serviceID;
	NSString* _userID;
	NSString* _accessGroup;

}

@property (nonatomic,copy,readonly) NSString * serviceID;                //@synthesize serviceID=_serviceID - In the implementation block
@property (nonatomic,copy,readonly) NSString * userID;                   //@synthesize userID=_userID - In the implementation block
@property (nonatomic,copy,readonly) NSString * accessGroup;              //@synthesize accessGroup=_accessGroup - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)mainAppSessionKeychain;
+(id)keychainWithService:(id)arg1 ;
+(id)sessionKeychainWithAppBundle:(id)arg1 ;
+(id)keychainWithService:(id)arg1 appBundle:(id)arg2 ;
-(id)loadItem:(id*)arg1 ;
-(void)loadItemWithTargetQueue:(id)arg1 onSuccess:(/*^block*/id)arg2 onError:(/*^block*/id)arg3 ;
-(id)initWithServiceID:(id)arg1 accessGroup:(id)arg2 userID:(id)arg3 ;
-(BOOL)saveItem:(id)arg1 error:(id*)arg2 ;
-(void)saveItem:(id)arg1 withTargetQueue:(id)arg2 onSuccess:(/*^block*/id)arg3 onError:(/*^block*/id)arg4 ;
-(void)removeItemWithTargetQueue:(id)arg1 onSuccess:(/*^block*/id)arg2 onError:(/*^block*/id)arg3 ;
-(BOOL)updateItem:(/*^block*/id)arg1 error:(id*)arg2 ;
-(id)initWithServiceID:(id)arg1 accessGroup:(id)arg2 ;
-(void)updateItem:(/*^block*/id)arg1 withTargetQueue:(id)arg2 onSuccess:(/*^block*/id)arg3 onError:(/*^block*/id)arg4 ;
-(void)createItem:(id)arg1 withTargetQueue:(id)arg2 onSuccess:(/*^block*/id)arg3 onError:(/*^block*/id)arg4 ;
-(BOOL)createItem:(id)arg1 error:(id*)arg2 ;
-(id)initWithService:(id)arg1 appBundle:(id)arg2 userID:(id)arg3 ;
-(id)initWithService:(id)arg1 appBundle:(id)arg2 ;
-(BOOL)supportsServicesWithMultipleAccounts;
-(BOOL)limitToOneResult;
-(id)dataForKeychainResult:(id)arg1 ;
-(id)keychainDictionaryForData:(id)arg1 ;
-(BOOL)removeItem:(id*)arg1 ;
-(NSString *)serviceID;
-(NSString *)accessGroup;
-(NSString *)userID;
@end

