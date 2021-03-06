/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:26 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <HealthDaemon/HDHealthEntity.h>

@interface HDSourceEntity : HDHealthEntity
+(id)databaseTable;
+(id)columnsDefinition;
+(long long)protectionClass;
+(id)propertyForSyncProvenance;
+(id)_insertSourceWithUUID:(id)arg1 bundleIdentifier:(id)arg2 name:(id)arg3 options:(id)arg4 isCurrentDevice:(id)arg5 productType:(id)arg6 deleted:(BOOL)arg7 modificationDate:(id)arg8 provenance:(long long)arg9 database:(id)arg10 error:(id*)arg11 ;
+(id)_predicateForSourceWithBundleIdentifier:(id)arg1 ;
+(id)_sourceWithPredicate:(id)arg1 healthDatabase:(id)arg2 error:(id*)arg3 ;
+(id)_sourceWithPredicate:(id)arg1 database:(id)arg2 error:(id*)arg3 ;
+(id)_predicateForSourceWithUUID:(id)arg1 ;
+(id)_predicateForLocalDeviceSource;
+(id)_predicateForNotDeletedSourceWithPredicate:(id)arg1 ;
+(id)_propertySettersForSource;
+(id)_propertiesForCodableSource;
+(id)_codableSourceWithRow:(HDSQLiteRowRef)arg1 ;
+(id)_insertDeletedSourceWithUUID:(id)arg1 modificationDate:(id)arg2 provenance:(long long)arg3 database:(id)arg4 error:(id*)arg5 ;
+(id)createNonUniqueIndicesForColumns;
+(id)insertSourceWithUUID:(id)arg1 bundleIdentifier:(id)arg2 name:(id)arg3 options:(unsigned long long)arg4 isCurrentDevice:(BOOL)arg5 productType:(id)arg6 modificationDate:(id)arg7 provenance:(long long)arg8 healthDatabase:(id)arg9 error:(id*)arg10 ;
+(id)insertCodableSource:(id)arg1 provenance:(long long)arg2 healthDatabase:(id)arg3 error:(id*)arg4 ;
+(id)sourceWithBundleIdentifier:(id)arg1 healthDatabase:(id)arg2 error:(id*)arg3 ;
+(id)sourceWithBundleIdentifier:(id)arg1 database:(id)arg2 error:(id*)arg3 ;
+(id)sourceWithUUID:(id)arg1 healthDatabase:(id)arg2 error:(id*)arg3 ;
+(id)sourceWithUUID:(id)arg1 database:(id)arg2 error:(id*)arg3 ;
+(id)sourceForLocalDeviceWithHealthDatabase:(id)arg1 error:(id*)arg2 ;
+(id)sourceForLocalDeviceWithDatabase:(id)arg1 error:(id*)arg2 ;
+(id)allSourcePersistentIDsWithHealthDatabase:(id)arg1 error:(id*)arg2 ;
-(id)sourceInHealthDatabase:(id)arg1 error:(id*)arg2 ;
-(id)codableSourceInHealthDatabase:(id)arg1 error:(id*)arg2 ;
-(id)sourceBundleIdentifierInHealthDatabase:(id)arg1 error:(id*)arg2 ;
-(id)sourceUUIDWithHealthDatabase:(id)arg1 error:(id*)arg2 ;
-(BOOL)setName:(id)arg1 healthDatabase:(id)arg2 error:(id*)arg3 ;
-(BOOL)setBundleIdentifier:(id)arg1 UUID:(id)arg2 healthDatabase:(id)arg3 error:(id*)arg4 ;
-(BOOL)deleteSourceWithDatabase:(id)arg1 error:(id*)arg2 ;
@end

