/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:52 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface FBAutoupdaterHost : NSObject {

	NSString* _activeUpdatePath;
	NSString* _appliedUpdateSymlink;
	NSString* _autoupdaterDirectory;
	NSString* _baseDirectory;
	NSString* _bundledUpdatePath;
	NSString* _bundledUpdateVersion;
	NSString* _compatibilityVersion;
	NSString* _groupIdentifier;
	NSString* _libraryDirectory;
	NSString* _scope;
	NSString* _temporaryDirectory;
	NSString* _updatesDirectory;

}

@property (nonatomic,copy) NSString * activeUpdatePath;                  //@synthesize activeUpdatePath=_activeUpdatePath - In the implementation block
@property (nonatomic,copy) NSString * appliedUpdateSymlink;              //@synthesize appliedUpdateSymlink=_appliedUpdateSymlink - In the implementation block
@property (nonatomic,copy) NSString * autoupdaterDirectory;              //@synthesize autoupdaterDirectory=_autoupdaterDirectory - In the implementation block
@property (nonatomic,copy) NSString * baseDirectory;                     //@synthesize baseDirectory=_baseDirectory - In the implementation block
@property (nonatomic,copy) NSString * bundledUpdatePath;                 //@synthesize bundledUpdatePath=_bundledUpdatePath - In the implementation block
@property (nonatomic,copy) NSString * bundledUpdateVersion;              //@synthesize bundledUpdateVersion=_bundledUpdateVersion - In the implementation block
@property (nonatomic,copy) NSString * compatibilityVersion;              //@synthesize compatibilityVersion=_compatibilityVersion - In the implementation block
@property (nonatomic,copy) NSString * groupIdentifier;                   //@synthesize groupIdentifier=_groupIdentifier - In the implementation block
@property (nonatomic,copy) NSString * libraryDirectory;                  //@synthesize libraryDirectory=_libraryDirectory - In the implementation block
@property (nonatomic,copy) NSString * scope;                             //@synthesize scope=_scope - In the implementation block
@property (nonatomic,copy) NSString * temporaryDirectory;                //@synthesize temporaryDirectory=_temporaryDirectory - In the implementation block
@property (nonatomic,copy) NSString * updatesDirectory;                  //@synthesize updatesDirectory=_updatesDirectory - In the implementation block
-(NSString *)bundledUpdateVersion;
-(BOOL)activateAppliedUpdate;
-(NSString *)activeUpdatePath;
-(id)appBundle;
-(NSString *)autoupdaterDirectory;
-(NSString *)appliedUpdateSymlink;
-(NSString *)updatesDirectory;
-(void)setAppliedUpdateSymlink:(NSString *)arg1 ;
-(void)setUpdatesDirectory:(NSString *)arg1 ;
-(id)initWithScope:(id)arg1 compatibilityVersion:(id)arg2 bundledUpdatePath:(id)arg3 bundledUpdateVersion:(id)arg4 groupIdentifier:(id)arg5 ;
-(NSString *)baseDirectory;
-(NSString *)libraryDirectory;
-(void)setActiveUpdatePath:(NSString *)arg1 ;
-(void)setAutoupdaterDirectory:(NSString *)arg1 ;
-(void)setBaseDirectory:(NSString *)arg1 ;
-(NSString *)bundledUpdatePath;
-(void)setBundledUpdatePath:(NSString *)arg1 ;
-(void)setBundledUpdateVersion:(NSString *)arg1 ;
-(void)setLibraryDirectory:(NSString *)arg1 ;
-(void)setGroupIdentifier:(NSString *)arg1 ;
-(void)setScope:(NSString *)arg1 ;
-(NSString *)scope;
-(NSString *)groupIdentifier;
-(NSString *)compatibilityVersion;
-(void)setCompatibilityVersion:(NSString *)arg1 ;
-(NSString *)temporaryDirectory;
-(void)setTemporaryDirectory:(NSString *)arg1 ;
@end

